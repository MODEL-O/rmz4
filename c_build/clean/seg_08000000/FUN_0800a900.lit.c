// undefined FUN_0800a900(void)
// entry 0x800a900


void FUN_0800a900(int param_1)

{
  int iVar1;
  ushort *puVar2;
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar2 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + 0x02000a04);
    *puVar2 = (ushort)0x0000fffc & *puVar2 | 2;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(byte *)(0x02000ab0 + 0x0002d024) == 1) {
    iVar1 = *(int *)(param_1 + 0x4c) + -9;
  }
  else {
    if (*(byte *)(0x02000ab0 + 0x0002d024) < 3) {
      return;
    }
    puVar2 = (ushort *)(0x02000ab0 + 0x0002d048);
    if (*puVar2 <= 0x000004ff) {
      *puVar2 = *puVar2 + 8;
    }
    iVar1 = *(int *)(param_1 + 0x4c) - (uint)(*puVar2 >> 8);
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  return;
}


