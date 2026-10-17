// undefined FUN_080751f0(void)
// entry 0x80751f0


undefined4 FUN_080751f0(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (((*(byte *)(param_1 + 0xd) < 5) && (*(char *)(param_1 + 0xde) != '\0')) &&
     (((piVar1 = (int *)FUN_080503a8(param_1), piVar1 != (int *)0x0 &&
       (((*piVar1 - *(int *)(param_1 + 0x54)) + 0x4000U < 0x8001 &&
        ((piVar1[1] - *(int *)(param_1 + 0x58)) + 0x4a00U < 0x9401)))) ||
      ((*(uint *)(param_1 + 0x8c) & 0x2000) != 0)))) {
    *(undefined1 *)(param_1 + 0xd) = 6;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


