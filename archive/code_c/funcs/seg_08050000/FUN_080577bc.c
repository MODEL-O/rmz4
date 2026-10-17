// undefined FUN_080577bc(void)
// entry 0x80577bc


undefined4 FUN_080577bc(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar5 = *(int *)(param_1 + 0xd4);
        if ((iVar5 != 0) && (1 < *(byte *)(iVar5 + 0xc))) {
          *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
          *(undefined4 *)(iVar5 + 0x8c) = 0;
          *(undefined4 *)(iVar5 + 0x90) = 0;
          *(undefined1 *)(iVar5 + 0x94) = 0;
          *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
          piVar2 = (int *)((uint)*(byte *)(iVar5 + 9) * 4 + DAT_080579d0);
          *(undefined4 *)(iVar5 + 0xc) = 3;
          *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
          *(int *)(param_1 + 0xd4) = 0;
        }
        iVar5 = *(int *)(param_1 + 0xd8);
        if ((iVar5 != 0) && (1 < *(byte *)(iVar5 + 0xc))) {
          *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
          *(undefined4 *)(iVar5 + 0x8c) = 0;
          *(undefined4 *)(iVar5 + 0x90) = 0;
          *(undefined1 *)(iVar5 + 0x94) = 0;
          *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
          piVar2 = (int *)((uint)*(byte *)(iVar5 + 9) * 4 + DAT_080579d0);
          *(undefined4 *)(iVar5 + 0xc) = 3;
          *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
          *(int *)(param_1 + 0xd8) = 0;
        }
      }
      goto LAB_08057970;
    }
    if (bVar1 != 0) goto LAB_08057970;
    FUN_0801cf00(param_1,DAT_080578b8);
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  piVar2 = (int *)(param_1 + 0xd4);
  iVar5 = *piVar2;
  if ((iVar5 != 0) && (1 < *(byte *)(iVar5 + 0xc))) {
    *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
    *(undefined4 *)(iVar5 + 0x8c) = 0;
    *(undefined4 *)(iVar5 + 0x90) = 0;
    *(undefined1 *)(iVar5 + 0x94) = 0;
    *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(iVar5 + 9) * 4 + DAT_080578bc);
    *(undefined4 *)(iVar5 + 0xc) = 3;
    *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
    *piVar2 = 0;
  }
  piVar3 = (int *)(param_1 + 0xd8);
  iVar5 = *piVar3;
  if ((iVar5 != 0) && (1 < *(byte *)(iVar5 + 0xc))) {
    *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
    *(undefined4 *)(iVar5 + 0x8c) = 0;
    *(undefined4 *)(iVar5 + 0x90) = 0;
    *(undefined1 *)(iVar5 + 0x94) = 0;
    *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
    piVar4 = (int *)((uint)*(byte *)(iVar5 + 9) * 4 + DAT_080578bc);
    *(undefined4 *)(iVar5 + 0xc) = 3;
    *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
    *piVar3 = 0;
  }
  iVar5 = *piVar2;
  if (iVar5 == 0) {
    iVar5 = *piVar3;
    if (iVar5 == 0) goto LAB_08057970;
LAB_080578c6:
    if (*(char *)(iVar5 + 0xb4) == '\0') goto LAB_08057970;
    *(undefined1 *)(iVar5 + 0xb6) = 1;
  }
  else {
    if (*piVar3 == 0) goto LAB_080578c6;
    if ((*(char *)(iVar5 + 0xb4) == '\0') || (*(char *)(*piVar3 + 0xb4) == '\0')) goto LAB_08057970;
    FUN_08002b10(0xfd);
    *(undefined1 *)(*piVar2 + 0xb5) = 1;
    *(undefined1 *)(*piVar3 + 0xb5) = 1;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_08057970:
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_080579d8) * 4 + DAT_080579d4)) * 0x18 + DAT_080579dc);
  if ((*(int *)(param_1 + 0xd4) == 0) && (*(int *)(param_1 + 0xd8) == 0)) {
    *(undefined1 *)(param_1 + 0xe) = 10;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


