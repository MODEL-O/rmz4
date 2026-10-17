// undefined FUN_080ff164(void)
// entry 0x80ff164


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080ff164(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x04') {
    uVar2 = (int)-(*(byte *)(param_1 + 10) & 0x20) >> 0x1f & 0x20;
    if (*(int *)(*piRam080ff1a4 + 0x54) <= *(int *)(param_1 + 0x54)) {
      uVar2 = uVar2 | 1;
    }
    FUN_080d4c8c(param_1 + 0x54,_FUN_080ff1a0,0,uVar2);
    uVar2 = (int)-(*(byte *)(param_1 + 10) & 0x20) >> 0x1f & 0x20;
    if (*(int *)(*piRam080ff1e4 + 0x54) <= *(int *)(param_1 + 0x54)) {
      uVar2 = uVar2 | 1;
    }
    FUN_080d4c8c(param_1 + 0x54,_FUN_080ff1e0,0,uVar2);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ff218);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


