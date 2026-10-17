// undefined FUN_08129258(void)
// entry 0x8129258


undefined4 * FUN_08129258(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_1;
  if ((0xf < param_3) && ((((uint)param_2 | (uint)param_1) & 3) == 0)) {
    do {
      *puVar2 = *param_2;
      puVar2[1] = param_2[1];
      puVar3 = param_2 + 3;
      puVar2[2] = param_2[2];
      param_2 = param_2 + 4;
      puVar2[3] = *puVar3;
      puVar2 = puVar2 + 4;
      param_3 = param_3 - 0x10;
    } while (0xf < param_3);
    for (; 3 < param_3; param_3 = param_3 - 4) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    }
  }
  while (param_3 = param_3 - 1, param_3 != 0xffffffff) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return param_1;
}


