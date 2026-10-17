// undefined FUN_080902e0(void)
// entry 0x80902e0


undefined4 FUN_080902e0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xb7);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08090348);
    iVar2 = DAT_0809034c;
    *(int *)(param_1 + 0x5c) = (int)*(short *)((bVar1 + 0x40 & 0xff) * 2 + DAT_0809034c) << 6;
    *(int *)(param_1 + 0x60) = (int)*(short *)((uint)bVar1 * 2 + iVar2) << 6;
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar2 = DAT_08090378;
  if ((*(byte *)(iVar3 + 10) & 0x10) != 0) {
    iVar2 = 0x400;
  }
  *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + *(int *)(param_1 + 0x5c) + iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + *(int *)(param_1 + 0x60) + DAT_0809037c;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined1 *)(param_1 + 0xb5) = 1;
  }
  return in_lr;
}


