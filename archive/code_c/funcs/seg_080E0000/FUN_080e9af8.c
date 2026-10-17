// undefined FUN_080e9af8(void)
// entry 0x80e9af8


undefined4 FUN_080e9af8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080e9b7c));
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28);
    if (*(byte *)(iVar2 + 0xc) < 2) {
      if (*(char *)(param_1 + 0xb8) != *(char *)(iVar2 + 0xb8)) {
        *(char *)(param_1 + 0xb8) = *(char *)(iVar2 + 0xb8);
        FUN_0801cf00(param_1,CONCAT11(*(undefined1 *)(iVar2 + 0x1e),*(undefined1 *)(iVar2 + 0x70)));
        FUN_0801cff0(param_1);
      }
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar2 + 0x3c);
      *(undefined1 *)(param_1 + 0x4e) = *(undefined1 *)(iVar2 + 0x4e);
    }
    else {
      piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e9b24);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
      FUN_080e9b80(param_1);
    }
  }
  return in_lr;
}


