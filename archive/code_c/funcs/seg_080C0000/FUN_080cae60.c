// undefined FUN_080cae60(void)
// entry 0x80cae60


undefined4 FUN_080cae60(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((*(char *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 8) == '\x01') &&
     ((*(uint *)(iVar2 + 0x8c) & 0x100) != 0)) {
    piVar1 = (int *)((uint)*(byte *)(iVar2 + 9) * 4 + DAT_080caeb0);
    *(undefined4 *)(iVar2 + 0xc) = 2;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    *(uint *)(iVar2 + 0x8c) = 0;
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined1 *)(iVar2 + 0x94) = 0;
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
  }
  return in_lr;
}


