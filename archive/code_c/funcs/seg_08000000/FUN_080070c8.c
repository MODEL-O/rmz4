// undefined FUN_080070c8(void)
// entry 0x80070c8


undefined4 FUN_080070c8(int *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  param_2[1] = 0;
  *param_2 = 0;
  bVar1 = FUN_08007770(*param_1,param_1[1]);
  if (bVar1 < 0xd) {
    cVar2 = FUN_08007770(*param_1 + DAT_08007188,param_1[1]);
    if (2 < (byte)(bVar1 - (cVar2 + -1))) {
      iVar5 = *param_2;
      iVar4 = FUN_08129050(*param_1);
      *param_2 = (iVar5 + 0x7800) - iVar4;
    }
    cVar2 = FUN_08007770(*param_1 + 0x7800,param_1[1]);
    if (2 < (byte)(bVar1 - (cVar2 + -1))) {
      iVar4 = FUN_08129050(*param_1,0x7800);
      *param_2 = *param_2 - iVar4;
    }
    cVar2 = FUN_08007770(*param_1,param_1[1] + DAT_0800718c);
    if (2 < (byte)(bVar1 - (cVar2 + -1))) {
      iVar5 = param_2[1];
      iVar4 = FUN_08129050(param_1[1]);
      param_2[1] = (iVar5 + 0x5000) - iVar4;
    }
    cVar2 = FUN_08007770(*param_1,param_1[1] + 0x5000);
    if ((byte)(bVar1 - (cVar2 + -1)) < 3) {
      return in_lr;
    }
    iVar5 = FUN_08129050(param_1[1],0x5000);
    iVar4 = param_2[1];
  }
  else if ((byte)(bVar1 - 0xd) < 2) {
    bVar3 = FUN_08007770(*param_1 + DAT_08007200,param_1[1]);
    if ((bVar1 != bVar3) && (bVar3 != 0xf)) {
      iVar5 = *param_2;
      iVar4 = FUN_08129050(*param_1);
      *param_2 = (iVar5 + 0x7800) - iVar4;
    }
    bVar3 = FUN_08007770(*param_1 + 0x7800,param_1[1]);
    if ((bVar1 != bVar3) && (bVar3 != 0xf)) {
      iVar4 = FUN_08129050(*param_1,0x7800);
      *param_2 = *param_2 - iVar4;
    }
    iVar5 = FUN_08129050(param_1[1],0xa000);
    iVar4 = 0xf000;
  }
  else {
    iVar5 = FUN_08129050(param_1[1],0xa000);
    iVar4 = DAT_0800721c;
  }
  param_2[1] = iVar4 - iVar5;
  return in_lr;
}


