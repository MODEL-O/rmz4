// undefined FUN_0809c07c(void)
// entry 0x809c07c


undefined4 FUN_0809c07c(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 local_24 [4];
  byte abStack_14 [4];
  
  local_24[0] = *DAT_0809c11c;
  local_24[1] = DAT_0809c11c[1];
  local_24[2] = DAT_0809c11c[2];
  local_24[3] = DAT_0809c11c[3];
  FUN_08129258(abStack_14,DAT_0809c120,4);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,*(undefined2 *)(local_24 + bVar1));
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)abStack_14[bVar1] * 4 + DAT_0809c124)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809c128);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_0809c34c(param_1);
  }
  return in_lr;
}


