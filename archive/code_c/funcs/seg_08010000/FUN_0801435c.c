// undefined FUN_0801435c(void)
// entry 0x801435c


undefined4 FUN_0801435c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  puVar2 = DAT_080143a0;
  puVar1 = DAT_08014388;
  if (*(int *)(*(int *)(DAT_08014380 + DAT_08014384) + 0x58) < 0x27001) {
    *DAT_080143a0 = 0x1e000;
    uVar3 = 0x28000;
  }
  else {
    *DAT_08014388 = 0x69000;
    uVar3 = 0x280000;
    puVar2 = puVar1;
  }
  puVar2[3] = uVar3;
  return in_lr;
}


