// undefined FUN_08096394(void)
// entry 0x8096394


undefined4 FUN_08096394(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar2 + 0xc) < 2) {
    if (*(char *)(iVar2 + 0xbd) != '\0') {
      *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(iVar2 + 0x70);
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080963ec));
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080963bc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080964c0(param_1);
  }
  return in_lr;
}


