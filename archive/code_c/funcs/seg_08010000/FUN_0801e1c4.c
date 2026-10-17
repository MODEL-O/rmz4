// undefined FUN_0801e1c4(void)
// entry 0x801e1c4


undefined8 FUN_0801e1c4(void)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  
  iVar2 = DAT_0801e1f0;
  sVar1 = *(short *)(DAT_0801e1f0 + DAT_0801e1f4);
  if (sVar1 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *(short *)(DAT_0801e1f0 + DAT_0801e1f4) = sVar1 + -1;
    puVar4 = (undefined4 *)(iVar2 + 0x448);
    puVar3 = (undefined4 *)*puVar4;
    *puVar4 = *puVar3;
    puVar4 = (undefined4 *)(iVar2 + DAT_0801e1f8);
    *puVar3 = *puVar4;
    *puVar4 = puVar3;
  }
  return CONCAT44(in_lr,puVar3);
}


