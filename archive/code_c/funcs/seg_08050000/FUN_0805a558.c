// undefined FUN_0805a558(void)
// entry 0x805a558


undefined4 FUN_0805a558(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0xb8);
    FUN_08005784(param_1 + 0x74,DAT_0805a5d8);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0x20;
    *(uint *)(param_1 + 0x68) = (bVar1 >> 4 & 1) * 2 + -1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x68) * *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar2;
  if (0x240 < iVar2) {
    *(undefined4 *)(param_1 + 0x5c) = 0x240;
  }
  iVar2 = FUN_0805c3a8(param_1);
  if (0x1e000 < (iVar2 - *(int *)(param_1 + 0x54)) + 0x16800U) {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


