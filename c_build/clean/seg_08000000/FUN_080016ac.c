// undefined FUN_080016ac(void)
// entry 0x80016ac


undefined4 FUN_080016ac(byte param_1,undefined4 param_2,uint param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  pcVar1 = DAT_080016e0;
  if (param_1 < 6) {
    if ((*(int *)DAT_080016e0 == '\0') && (param_3 < 0x299)) {
      DAT_080016e0[1] = param_1;
      *(undefined4 *)(pcVar1 + 8) = param_2;
      *(uint *)(pcVar1 + 0x14) = param_3;
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      *pcVar1 = '\x02';
      pcVar1[2] = '\x01';
      pcVar1[3] = '\0';
      uVar2 = 0;
      goto LAB_080016e8;
    }
  }
  uVar2 = 0xffffffff;
LAB_080016e8:
  return uVar2;
}


