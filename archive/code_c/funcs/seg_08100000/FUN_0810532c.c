// undefined FUN_0810532c(void)
// entry 0x810532c


undefined4 FUN_0810532c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xb4) == '\x01') && (*(char *)(param_1 + 0x11) != '\x04')) {
    iVar2 = *(int *)(param_1 + 0x28) + DAT_0810536c;
    *(uint *)(iVar2 + 8) =
         *(int *)(iVar2 + 8) +
         (6 - *(int *)(iVar2 + 0x28)) *
         (uint)*(byte *)((uint)*(byte *)(param_1 + 0x11) + DAT_08105370);
    if (*(byte *)(param_1 + 0x11) < 2) {
      FUN_08002b10(0x20);
    }
    else if (*(byte *)(param_1 + 0x11) == 2) {
      FUN_08002b10(0x1a4);
    }
    else {
      FUN_08002b10(6);
    }
    iVar2 = *(int *)(param_1 + 0x28) + DAT_081053c8;
    *(undefined4 *)(iVar2 + 0x2c) = 1;
    *(undefined4 *)(iVar2 + 0x30) = 0x1e;
    *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  }
  iVar2 = *(int *)(param_1 + 0x28) + DAT_081053c8;
  *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) & ~(1 << *(sbyte *)(param_1 + 0x10));
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_081053cc);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


