// undefined FUN_080276dc(void)
// entry 0x80276dc


undefined4 FUN_080276dc(byte param_1,char *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = (uint)param_1;
  piVar5 = (int *)(uVar6 * 0x10 + DAT_08027724);
  if (*piVar5 == 0) {
    if ((*param_2 == '\0') && (param_2[2] != '\0')) {
      iVar2 = FUN_0802b4cc();
      if (iVar2 != 0) {
        *(undefined1 *)(iVar2 + 0x25) = 0x10;
        iVar3 = DAT_08027728;
        *(char *)(iVar2 + 9) = param_2[1];
        *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)((uint)(byte)param_2[1] * 4 + iVar3);
      }
    }
    else {
      iVar2 = FUN_0801dd7c(*param_2,param_2[1]);
    }
    *piVar5 = iVar2;
    if (iVar2 != 0) {
      bVar4 = *(byte *)(iVar2 + 10);
      *(byte *)(iVar2 + 10) = bVar4 | 0x80;
      *(int **)(iVar2 + 0x18) = piVar5;
      *(char *)(iVar2 + 0x10) = param_2[2];
      *(char *)(iVar2 + 0x11) = param_2[3];
      *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_2 + 8);
      if (param_2[0xc] == '\0') {
        bVar4 = bVar4 & 0xef | 0x80;
      }
      else {
        bVar4 = bVar4 | 0x90;
      }
      *(byte *)(iVar2 + 10) = bVar4;
      if (param_2[0xd] == '\0') {
        bVar4 = *(byte *)(iVar2 + 10) & 0xdf;
      }
      else {
        bVar4 = *(byte *)(iVar2 + 10) | 0x20;
      }
      *(byte *)(iVar2 + 10) = bVar4;
      *(byte *)(piVar5 + 2) = param_1;
      *(undefined1 *)((int)piVar5 + 9) = 0;
      *(undefined2 *)((int)piVar5 + 0xe) = 0;
      *(undefined2 *)(piVar5 + 3) = 0;
      *(undefined2 *)((int)piVar5 + 10) = 0;
      if (uVar6 == 0) {
        *DAT_080277fc = iVar2;
        *(int *)(DAT_08027800 + 8) = iVar2;
        FUN_080382b0(iVar2,DAT_08027804,0);
        uVar1 = FUN_0803891c(iVar2);
        FUN_0802b53c(iVar2,uVar1);
      }
      if (uVar6 == 1) {
        if ((*(ushort *)(DAT_08027808 + 0x1d0) & 0x7f) == 4) {
          iVar3 = FUN_08128fb8(*(int *)(*DAT_080277fc + 0x54) + DAT_0802780c,0x3c000);
          *(int *)(iVar2 + 0x54) = iVar3 * 0x3c000 + *(int *)(iVar2 + 0x54);
        }
        *(byte *)(DAT_08027810 + 8) = *(byte *)(DAT_08027810 + 8) & 0x7f;
      }
    }
  }
  return in_lr;
}


