// undefined FUN_080ca298(void)
// entry 0x80ca298


undefined8 FUN_080ca298(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    if (*(char *)(param_1 + 0xb7) != '\0') {
      puVar1 = (uint *)(param_1 + 0xb8);
      uVar3 = *(uint *)(param_1 + 0x54);
      goto LAB_080ca2ce;
    }
    puVar1 = (uint *)(param_1 + 0xb8);
    uVar3 = *(uint *)(param_1 + 0x54);
LAB_080ca2de:
    if (*puVar1 < uVar3) goto LAB_080ca2e4;
  }
  else {
    if (*(char *)(param_1 + 0xb6) == '\0') {
      puVar1 = (uint *)(param_1 + 0xbc);
      uVar3 = *(uint *)(param_1 + 0x58);
      goto LAB_080ca2de;
    }
    puVar1 = (uint *)(param_1 + 0xbc);
    uVar3 = *(uint *)(param_1 + 0x58);
LAB_080ca2ce:
    if (uVar3 < *puVar1) {
LAB_080ca2e4:
      uVar2 = 0;
      goto LAB_080ca2e6;
    }
  }
  uVar2 = 1;
LAB_080ca2e6:
  return CONCAT44(in_lr,uVar2);
}


