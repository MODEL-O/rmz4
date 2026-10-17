// undefined FUN_0809c12c(void)
// entry 0x809c12c


undefined4 FUN_0809c12c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar2 + 0xc) < 2) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0809c188));
    if (*(char *)(iVar2 + 0xd) != *(char *)(param_1 + 0xb6)) {
      *(char *)(param_1 + 0xd) = *(char *)(iVar2 + 0xd);
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      *(char *)(param_1 + 0xb6) = *(char *)(iVar2 + 0xd);
    }
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809c154);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_0809c34c(param_1);
  }
  return in_lr;
}


