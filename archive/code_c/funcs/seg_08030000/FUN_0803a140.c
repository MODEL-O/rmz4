// undefined FUN_0803a140(void)
// entry 0x803a140


undefined8 FUN_0803a140(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\x04') {
    bVar1 = *(byte *)(param_1 + DAT_0803a15c);
    bVar2 = 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + DAT_0803a16c);
    bVar2 = 0x20;
  }
  if (((bVar2 & bVar1) == 0) && ((*(ushort *)(param_1 + DAT_0803a184) & 0x8000) == 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return CONCAT44(in_lr,uVar3);
}


