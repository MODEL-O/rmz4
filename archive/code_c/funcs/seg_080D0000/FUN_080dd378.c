// undefined FUN_080dd378(void)
// entry 0x80dd378


undefined4 FUN_080dd378(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (*(char *)(*(int *)(param_1 + 0x28) + 0xd) != '\x11')) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      FUN_0801cf00(param_1,DAT_080dd3e4);
    }
    else {
      FUN_0801cf00(param_1,DAT_080dd39c);
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0xd) == '\x01') && (*(char *)(param_1 + 0x73) == '\x03')) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dd3e8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080dcdf0(param_1);
  }
  return in_lr;
}


