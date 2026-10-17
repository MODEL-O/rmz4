// undefined FUN_08127d38(void)
// entry 0x8127d38


undefined4 FUN_08127d38(void)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 in_lr;
  
  piVar5 = (int *)*DAT_08127d84;
  if (*piVar5 == DAT_08127d88) {
    *piVar5 = *piVar5 + 1;
    iVar3 = 0xc;
    piVar1 = piVar5 + 0x14;
    do {
      *(undefined1 *)piVar1 = 0;
      iVar3 = iVar3 + -1;
      piVar1 = piVar1 + 0x10;
    } while (0 < iVar3);
    puVar2 = (undefined1 *)piVar5[7];
    if (puVar2 != (undefined1 *)0x0) {
      uVar4 = 1;
      do {
        FUN_08128f80(uVar4 & 0xff,piVar5[0xb]);
        *puVar2 = 0;
        uVar4 = uVar4 + 1;
        puVar2 = puVar2 + 0x40;
      } while ((int)uVar4 < 5);
    }
    *piVar5 = DAT_08127d88;
  }
  return in_lr;
}


