// undefined FUN_080f7508(void)
// entry 0x80f7508


undefined4 FUN_080f7508(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xb8);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined1 *)(iVar2 + 0x94) = 0;
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(iVar2 + 9) * 4 + DAT_080f7554);
    *(undefined4 *)(iVar2 + 0xc) = 3;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  *(int *)(param_1 + 0xb8) = 0;
  return in_lr;
}


