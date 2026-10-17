// undefined FUN_0810d5dc(void)
// entry 0x810d5dc


undefined4 FUN_0810d5dc(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_lr;
  
  piVar3 = (int *)(DAT_0810d65c + DAT_0810d660);
  if (*(int **)(DAT_0810d65c + 0x588) != (int *)0x0) {
    piVar2 = *(int **)(DAT_0810d65c + 0x588);
    piVar5 = (int *)*piVar3;
    do {
      piVar4 = piVar2;
      piVar2 = (int *)*piVar4;
      *piVar4 = (int)piVar5;
      piVar5 = piVar4;
    } while (piVar2 != (int *)0x0);
    *piVar3 = (int)piVar4;
  }
  iVar1 = DAT_0810d65c;
  *(undefined4 *)(DAT_0810d65c + 0x588) = 0;
  iVar6 = 0;
  if (0 < *(short *)(iVar1 + 4)) {
    do {
      FUN_0810dbdc(*(undefined1 *)(iVar6 + iVar1 + 0x188),*(undefined1 *)(iVar6 + iVar1 + 0x1e8),
                   *(undefined4 *)(iVar6 * 4 + iVar1 + 8),*(undefined2 *)(iVar6 * 2 + iVar1 + 0x248)
                  );
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(short *)(iVar1 + 4));
  }
  *(undefined2 *)(DAT_0810d65c + 4) = 0;
  return in_lr;
}


