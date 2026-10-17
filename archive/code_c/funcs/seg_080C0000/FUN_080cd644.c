// undefined FUN_080cd644(void)
// entry 0x80cd644


undefined4 FUN_080cd644(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if ((*(char *)(param_1 + 0x12) == '\x02') && (*(byte *)(param_1 + 0x11) < 0xb)) {
    local_10 = *(undefined4 *)(param_1 + 0xb4);
    local_c = *(undefined4 *)(param_1 + 0xb8);
    FUN_080cd4f8(&local_10,*(undefined1 *)(param_1 + 0x10),*(byte *)(param_1 + 0x11) + 1);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cd6b4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  FUN_0801cff0(param_1);
  return in_lr;
}


