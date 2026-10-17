// undefined FUN_0810ddbc(void)
// entry 0x810ddbc


undefined8 FUN_0810ddbc(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 in_lr;
  
  iVar1 = DAT_0810de24;
  puVar4 = *(undefined4 **)(DAT_0810de24 + 0x588);
  if (puVar4 != (undefined4 *)0x0) {
    do {
      if ((param_1 & 0xffff & DAT_0810de28) == (DAT_0810de28 & *(ushort *)(puVar4 + 1)))
      goto LAB_0810de6a;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  if ((undefined4 *)*DAT_0810de2c != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*DAT_0810de2c;
    puVar6 = DAT_0810de2c;
    do {
      puVar4 = puVar2;
      if ((param_1 & 0xffff & DAT_0810de28) == (DAT_0810de28 & *(ushort *)(puVar4 + 1))) {
        *puVar6 = *puVar4;
        *puVar4 = *(undefined4 *)(iVar1 + 0x588);
        *(undefined4 *)(iVar1 + 0x588) = puVar4;
        goto LAB_0810de6a;
      }
      puVar2 = (undefined4 *)*puVar4;
      puVar6 = puVar4;
    } while ((undefined4 *)*puVar4 != (undefined4 *)0x0);
  }
  if (*(int *)(DAT_0810de24 + 0x590) == 0) {
    piVar5 = (int *)(DAT_0810de24 + 0x58c);
    iVar3 = *piVar5;
    *(int *)(DAT_0810de24 + 0x590) = iVar3;
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)0x0;
      goto LAB_0810de6a;
    }
    *piVar5 = 0;
  }
  puVar4 = *(undefined4 **)(iVar1 + 0x590);
  *(undefined4 *)(iVar1 + 0x590) = *puVar4;
  *puVar4 = *(undefined4 *)(iVar1 + 0x588);
  *(undefined4 *)(iVar1 + 0x588) = puVar4;
  *(ushort *)((int)puVar4 + 6) = *(ushort *)((int)puVar4 + 6) | 0x8000;
LAB_0810de6a:
  return CONCAT44(in_lr,puVar4);
}


