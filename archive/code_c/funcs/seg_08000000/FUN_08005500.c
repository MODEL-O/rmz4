// undefined FUN_08005500(void)
// entry 0x8005500


undefined8 FUN_08005500(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = *puVar1;
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
    puVar1[1] = param_1 + 0x14;
    *puVar1 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 **)(*(int *)(param_1 + 0x14) + 4) = puVar1;
    *(undefined4 **)(param_1 + 0x14) = puVar1;
    *(undefined2 *)((int)puVar1 + 10) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  return CONCAT44(in_lr,puVar1);
}


