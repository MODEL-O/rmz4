// undefined FUN_0801717c(void)
// entry 0x801717c


undefined4 FUN_0801717c(int param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  puVar1 = DAT_080171a8;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_080171a8 = (short)DAT_080171ac;
    puVar1[1] = (short)DAT_080171b0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  if (DAT_080171b4 < *(int *)(param_1 + 0x34)) {
    puVar2 = (undefined4 *)(DAT_080171d0 + DAT_080171d4);
    uVar3 = 0x280000;
  }
  else {
    puVar2 = (undefined4 *)(DAT_080171b8 + DAT_080171bc);
    uVar3 = 0x25000;
  }
  *puVar2 = uVar3;
  return in_lr;
}


