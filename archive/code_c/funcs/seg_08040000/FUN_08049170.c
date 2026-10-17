// undefined FUN_08049170(void)
// entry 0x8049170


undefined4 FUN_08049170(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar2 = *(ushort *)(iVar1 + 0x15a) & 8;
    if ((*(ushort *)(iVar1 + 0x15a) & 8) == 0) {
      if (1 < *(byte *)(iVar1 + 0xc0)) {
        return in_lr;
      }
      if (1 < *(byte *)(iVar1 + 0xc1)) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = uVar2;
      *(uint *)(param_1 + 0x90) = uVar2;
      *(char *)(param_1 + 0x94) = (char)uVar2;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080491f8);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


