// undefined FUN_0801e17c(void)
// entry 0x801e17c


undefined4 FUN_0801e17c(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar1 = DAT_0801e1b8;
  puVar3 = (undefined4 *)(DAT_0801e1b8 + 0x448);
  *puVar3 = 0;
  puVar2 = (undefined4 *)(iVar1 + 0x84);
  iVar4 = 0x2f;
  do {
    *puVar2 = *puVar3;
    *puVar3 = puVar2;
    puVar2 = puVar2 + 5;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  *(undefined4 *)(iVar1 + DAT_0801e1bc) = 0;
  *(undefined2 *)(iVar1 + DAT_0801e1c0) = 0x30;
  return in_lr;
}


