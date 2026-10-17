// undefined FUN_080f73bc(void)
// entry 0x80f73bc


undefined4 FUN_080f73bc(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_080f7508(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0xb4) == '\0') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f7404);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080f7408(param_1);
  }
  return in_lr;
}


