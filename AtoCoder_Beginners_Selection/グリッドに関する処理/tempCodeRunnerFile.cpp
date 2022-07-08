  rep(y,H){ rep(x,W){
    if(S[y][x] == '.'){
      int ct = 0;
      rep_(dx, 3, -1){ rep_(dy, 3, -1){
        if(x+dx >= 0 && y+dy >= 0){
          if(S[y+dy][x+dx]=='#'){
            ct++;
          }
        }
      }}
      S[y][x] = ct;
    }
  }
  }