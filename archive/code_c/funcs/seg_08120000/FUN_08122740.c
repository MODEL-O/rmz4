// undefined FUN_08122740(void)
// entry 0x8122740


undefined8 FUN_08122740(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = DAT_081227a8;
  if ((*(ushort *)(DAT_081227a8 + 6) & 0x80) != 0) {
    FUN_08002b10(1);
    *(ushort *)(param_1 + 10) = *(short *)(param_1 + 10) + 1U & 1;
  }
  if ((*(ushort *)(iVar2 + 6) & 0x40) != 0) {
    FUN_08002b10(1);
    *(ushort *)(param_1 + 10) = *(short *)(param_1 + 10) + 1U & 1;
  }
  FUN_0810d85c((uint)*DAT_081227ac + DAT_081227b0,6,*(short *)(param_1 + 10) * 2 + 10);
  uVar1 = *(ushort *)(iVar2 + 4);
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      FUN_08002b10(2);
      if (*(short *)(param_1 + 10) == 0) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
  }
  else {
    FUN_08002b10(3);
    uVar3 = 0xfffffffe;
  }
  return CONCAT44(in_lr,uVar3);
}


