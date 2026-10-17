// undefined FUN_0811ed08(void)
// entry 0x811ed08


undefined8 FUN_0811ed08(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = DAT_0811ed78;
  if ((*(ushort *)(DAT_0811ed78 + 6) & 0x80) != 0) {
    FUN_08002b10(1);
    uVar2 = FUN_08129050(*(short *)(param_1 + 10) + 1,3);
    *(undefined2 *)(param_1 + 10) = uVar2;
  }
  if ((*(ushort *)(iVar3 + 6) & 0x40) != 0) {
    FUN_08002b10(1);
    uVar2 = FUN_08129050(*(short *)(param_1 + 10) + 2,3);
    *(undefined2 *)(param_1 + 10) = uVar2;
  }
  FUN_0810d85c((uint)*DAT_0811ed7c + DAT_0811ed80,2,*(short *)(param_1 + 10) * 2 + 0xd);
  uVar1 = *(ushort *)(iVar3 + 4);
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      FUN_08002b10(2);
      iVar3 = (int)((*(ushort *)(param_1 + 10) + 1) * 0x10000) >> 0x10;
    }
  }
  else {
    FUN_08002b10(3);
    iVar3 = -2;
  }
  return CONCAT44(in_lr,iVar3);
}


