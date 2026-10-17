// undefined FUN_080f734c(void)
// entry 0x80f734c


undefined4 FUN_080f734c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_080f7508(param_1);
    *(undefined1 *)(param_1 + 0xb5) = 1;
    FUN_0801cf00(param_1,DAT_080f73a4);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (iVar2 == 0) {
      piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f73a8);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
      FUN_080f7408(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


