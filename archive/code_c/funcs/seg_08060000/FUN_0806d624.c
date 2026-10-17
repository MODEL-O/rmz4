// undefined FUN_0806d624(void)
// entry 0x806d624


undefined4 FUN_0806d624(int param_1)

{
  ushort uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  FUN_0801cff0(param_1);
  uVar1 = *(ushort *)(DAT_0806d664 + 8);
  if (((uVar1 & 8) == 0) &&
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1)) {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(byte *)(param_1 + 0xe) = (byte)uVar1 & 8;
  }
  return in_lr;
}


