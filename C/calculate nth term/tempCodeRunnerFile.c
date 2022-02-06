  int i,array[50];
  array[1]=a;
  array[2]=b;
  array[3]=c;
  for(i=4;i<=n;i++)
  {
      array[i]=array[i-1]+array[i-2]+array[i-3];
  }
  return array[n];
}