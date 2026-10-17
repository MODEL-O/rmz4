// undefined FUN_081292b8(void)
// entry 0x81292b8


uint * FUN_081292b8(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = param_1;
  if ((3 < param_3) && (((uint)param_1 & 3) == 0)) {
    param_2 = param_2 & 0xff;
    uVar1 = param_2 << 8 | param_2;
    uVar1 = uVar1 | uVar1 << 0x10;
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      *puVar2 = uVar1;
      puVar2[1] = uVar1;
      puVar2[2] = uVar1;
      puVar2[3] = uVar1;
      puVar2 = puVar2 + 4;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    }
  }
  while (param_3 != 0) {
    *(char *)puVar2 = (char)param_2;
    puVar2 = (uint *)((int)puVar2 + 1);
    param_3 = param_3 - 1;
  }
  return param_1;
}


