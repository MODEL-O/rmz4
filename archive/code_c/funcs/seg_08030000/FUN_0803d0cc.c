// undefined FUN_0803d0cc(void)
// entry 0x803d0cc


undefined4 FUN_0803d0cc(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xb4);
  FUN_0801cff0();
  if (CONCAT11(*(undefined1 *)(iVar2 + 0x1e),*(undefined1 *)(iVar2 + 0x70)) == DAT_0803d140) {
    iVar3 = (uint)*(byte *)(param_1 + 0x71) << 0x18;
    if ((int)*(char *)(iVar2 + 0x71) == iVar3 >> 0x18) {
      FUN_08005794(param_1 + 0x74,
                   *(undefined4 *)
                    ((char)*(byte *)(param_1 + 0x71) * 4 +
                    *(int *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0803d17c)),
                   *(undefined1 *)(param_1 + 0xc1),*(undefined1 *)(param_1 + 0xc0),
                   *(undefined1 *)(param_1 + 0xc2),(iVar3 >> 0x19) + 1);
      return in_lr;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803d144);
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  return in_lr;
}


