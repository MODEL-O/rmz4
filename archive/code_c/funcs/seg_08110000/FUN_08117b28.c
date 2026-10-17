// undefined FUN_08117b28(void)
// entry 0x8117b28


undefined8 FUN_08117b28(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = DAT_08117bb8;
  if ((*(ushort *)(DAT_08117bb8 + 6) & 0x80) != 0) {
    FUN_08002b10(1);
    uVar1 = FUN_08129050(*(short *)(param_1 + 10) + 1,3);
    *(undefined2 *)(param_1 + 10) = uVar1;
  }
  if ((*(ushort *)(iVar2 + 6) & 0x40) != 0) {
    FUN_08002b10(1);
    uVar1 = FUN_08129050(*(short *)(param_1 + 10) + 2,3);
    *(undefined2 *)(param_1 + 10) = uVar1;
  }
  iVar2 = 0;
  if ((*(char *)(DAT_08117bc4 + 6) != '\0') || (*(char *)(DAT_08117bc4 + 4) == '\x01')) {
    iVar2 = 1;
  }
  FUN_0810d85c((uint)*DAT_08117bbc + DAT_08117bc0,iVar2 * -7 + 8,
               *(short *)(param_1 + 10) * 2 + (uint)*(byte *)(DAT_08117bc4 + 5));
  if ((*(ushort *)(DAT_08117bb8 + 4) & 2) == 0) {
    if ((*(ushort *)(DAT_08117bb8 + 4) & 1) == 0) {
      iVar2 = 0;
    }
    else {
      FUN_08002b10(2);
      iVar2 = (int)((*(ushort *)(param_1 + 10) + 1) * 0x10000) >> 0x10;
    }
  }
  else {
    FUN_08002b10(3);
    iVar2 = -2;
  }
  return CONCAT44(in_lr,iVar2);
}


