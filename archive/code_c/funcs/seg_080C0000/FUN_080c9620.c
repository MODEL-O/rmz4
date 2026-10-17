// undefined FUN_080c9620(void)
// entry 0x80c9620


undefined4 FUN_080c9620(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (CONCAT11(*(undefined1 *)(iVar2 + 0x1e),*(undefined1 *)(iVar2 + 0x70)) == DAT_080c9670) {
    if ('\x04' < *(char *)(iVar2 + 0x71)) {
      piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c96a4);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
      FUN_080c88ec(param_1);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c9674);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  return in_lr;
}


