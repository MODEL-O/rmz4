// undefined FUN_0807b97c(void)
// entry 0x807b97c


undefined4 FUN_0807b97c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0807e8c8(param_1,5);
    iVar2 = ((bVar1 >> 4 & 1) + 1 & 1) * 2 + -1;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(int *)(param_1 + 100) = iVar2 * 0x20;
    *(int *)(param_1 + 0x68) = iVar2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807ba14) * 4 +
                        DAT_0807ba10)));
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar2;
  iVar2 = *(int *)(param_1 + 0x68) * iVar2;
  if (iVar2 - DAT_0807ba18 != 0 && DAT_0807ba18 <= iVar2) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


