// undefined FUN_0811f2bc(void)
// entry 0x811f2bc


undefined4 FUN_0811f2bc(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if ((*(ushort *)(DAT_0811f2e4 + 4) & 1) == 0) {
    if ((*(ushort *)(DAT_0811f2e4 + 6) & 0x40) == 0) {
      if ((*(ushort *)(DAT_0811f2e4 + 6) & 0x80) != 0) {
        iVar4 = param_1 + DAT_0811f358;
        uVar3 = FUN_08129050(*(byte *)(iVar4 + 2) + 1,3);
        *(undefined1 *)(iVar4 + 2) = uVar3;
        FUN_08002b10(1);
      }
    }
    else {
      iVar4 = param_1 + DAT_0811f310;
      uVar3 = FUN_08129050(*(byte *)(iVar4 + 2) + 2,3);
      *(undefined1 *)(iVar4 + 2) = uVar3;
      FUN_08002b10(1);
    }
    iVar2 = DAT_0811f360;
    iVar4 = DAT_0811f35c;
    FUN_0810d85c((uint)*(ushort *)(DAT_0811f35c + 0x154) + DAT_0811f360,0x11,7);
    cVar1 = *(char *)(param_1 + DAT_0811f358 + 2);
    if (cVar1 == '\0') {
      iVar5 = 0x15c;
    }
    else {
      if (cVar1 != '\x01') {
        FUN_0810d85c((uint)*(ushort *)(iVar4 + 0x160) + iVar2,1,0x12);
        return in_lr;
      }
      iVar5 = 0x15e;
    }
    FUN_0810d85c((uint)*(ushort *)(iVar4 + iVar5) + iVar2,1,0x12);
  }
  else {
    FUN_08002b10(2);
    iVar4 = param_1 + DAT_0811f2e8;
    *(char *)(param_1 + 2) = *(char *)(iVar4 + 2) + '\x01';
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)(iVar4 + 3) = 0;
  }
  return in_lr;
}


