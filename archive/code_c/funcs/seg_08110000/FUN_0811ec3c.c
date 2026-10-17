// undefined FUN_0811ec3c(void)
// entry 0x811ec3c


undefined8 FUN_0811ec3c(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0811ec98;
  if ((*(ushort *)(DAT_0811ec98 + 6) & 0x80) != 0) {
    FUN_08002b10(1);
    *(ushort *)(param_1 + 10) = *(short *)(param_1 + 10) + 1U & 1;
  }
  if ((*(ushort *)(iVar1 + 6) & 0x40) != 0) {
    FUN_08002b10(1);
    *(ushort *)(param_1 + 10) = *(short *)(param_1 + 10) + 1U & 1;
  }
  if (param_2 == '\0') {
    FUN_0810d85c((uint)*DAT_0811ec9c + DAT_0811eca0,2,*(short *)(param_1 + 10) * 2 + 0xd);
  }
  else {
    FUN_0810d85c((uint)*DAT_0811ecd4 + DAT_0811ecd8,8,*(short *)(param_1 + 10) * 2 + 0xf);
  }
  if ((*(ushort *)(DAT_0811ecdc + 4) & 2) == 0) {
    if ((*(ushort *)(DAT_0811ecdc + 4) & 1) == 0) {
      uVar2 = 0;
    }
    else {
      FUN_08002b10(2);
      if (*(short *)(param_1 + 10) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
  }
  else {
    FUN_08002b10(3);
    uVar2 = 0xfffffffe;
  }
  return CONCAT44(in_lr,uVar2);
}


