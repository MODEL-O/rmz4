// undefined FUN_08117a68(void)
// entry 0x8117a68


undefined8 FUN_08117a68(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = DAT_08117af0;
  if ((*(ushort *)(DAT_08117af0 + 6) & 0x80) != 0) {
    FUN_08002b10(1);
    *(ushort *)(param_1 + 10) = *(short *)(param_1 + 10) + 1U & 1;
  }
  if ((*(ushort *)(iVar2 + 6) & 0x40) != 0) {
    FUN_08002b10(1);
    *(ushort *)(param_1 + 10) = *(short *)(param_1 + 10) + 1U & 1;
  }
  iVar2 = 0;
  if ((*(char *)(DAT_08117afc + 6) != '\0') || (*(char *)(DAT_08117afc + 4) == '\x01')) {
    iVar2 = 1;
  }
  FUN_0810d85c((uint)*DAT_08117af4 + DAT_08117af8,iVar2 * -7 + 8,
               *(short *)(param_1 + 10) * 2 + 2 + (uint)*(byte *)(DAT_08117afc + 5));
  if ((*(ushort *)(DAT_08117af0 + 4) & 2) == 0) {
    if ((*(ushort *)(DAT_08117af0 + 4) & 1) == 0) {
      uVar1 = 0;
    }
    else {
      FUN_08002b10(2);
      if (*(short *)(param_1 + 10) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
  }
  else {
    FUN_08002b10(3);
    uVar1 = 0xfffffffe;
  }
  return CONCAT44(in_lr,uVar1);
}


