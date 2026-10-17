// undefined FUN_08075380(void)
// entry 0x8075380


undefined4 FUN_08075380(int param_1)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_080753ec) {
    FUN_0801cf00(param_1);
  }
  FUN_08005784(param_1 + 0x74,DAT_080753f0);
  FUN_0801cff0(param_1);
  puVar2 = DAT_080754e0;
  uVar1 = *(ushort *)(DAT_080753f4 + 8);
  if ((uVar1 & 8) != 0) {
    return in_lr;
  }
  iVar3 = *(int *)(*DAT_080753f8 + 0x54);
  iVar5 = *(int *)(param_1 + 0x54);
  if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) != iVar5 < iVar3) {
    *(undefined1 *)(param_1 + 0xd) = 5;
    *(byte *)(param_1 + 0xe) = (byte)uVar1 & 8;
    return in_lr;
  }
  if (iVar5 - iVar3 < 0) {
    if (DAT_0807541c < iVar3 - iVar5) goto LAB_08075420;
LAB_08075418:
    iVar3 = 0;
  }
  else {
    if (iVar5 - iVar3 <= DAT_0807540c) goto LAB_08075418;
LAB_08075420:
    iVar3 = iVar5 - *(int *)(*DAT_080753f8 + 0x54);
    if (iVar3 < 0) {
      if (*(int *)(*DAT_080753f8 + 0x54) - iVar5 <= DAT_08075448) goto LAB_08075440;
LAB_0807544c:
      iVar3 = 2;
    }
    else {
      if (DAT_08075434 < iVar3) goto LAB_0807544c;
LAB_08075440:
      iVar3 = 1;
    }
  }
  iVar6 = 2;
  if ((0xf < *(short *)(param_1 + 0xa4)) && (iVar6 = 0, *(short *)(param_1 + 0xa4) < 0x20)) {
    iVar6 = 1;
  }
  if (*(int *)(*DAT_080753f8 + 0x54) < iVar5) {
    if (*(int *)(param_1 + 0xc4) + 0x3000 <= iVar5) {
LAB_080754a8:
      do {
        uVar4 = *puVar2 * DAT_080754e4 + DAT_080754e8;
        *puVar2 = uVar4 & 0x7fffffff;
        uVar4 = (uVar4 & 0x7fffffff) >> 0x10 & 0x1f;
        if (iVar3 == 0) {
          if (uVar4 < 10) goto LAB_08075510;
          if (uVar4 < 0x15) goto LAB_08075518;
LAB_0807551c:
          *(undefined1 *)(param_1 + 0xd) = 0xd;
        }
        else {
          if (iVar3 == 1) {
            if (iVar6 == 0) {
              if (0xd < uVar4) {
                if (0x16 < uVar4) goto LAB_0807551c;
LAB_08075518:
                *(undefined1 *)(param_1 + 0xd) = 0xb;
                goto LAB_0807551e;
              }
            }
            else if (0xb < uVar4) {
              if (uVar4 < 0x16) goto LAB_08075518;
              goto LAB_0807551c;
            }
          }
          else if (8 < uVar4) {
            if (uVar4 < 0x13) goto LAB_08075518;
            goto LAB_0807551c;
          }
LAB_08075510:
          *(undefined1 *)(param_1 + 0xd) = 4;
        }
LAB_0807551e:
        if (*(char *)(param_1 + 0xdc) != *(char *)(param_1 + 0xd)) {
          *(char *)(param_1 + 0xdc) = *(char *)(param_1 + 0xd);
          *(undefined1 *)(param_1 + 0xe) = 0;
          return in_lr;
        }
      } while( true );
    }
  }
  else if (iVar5 <= *(int *)(param_1 + 200) + DAT_080754a4) goto LAB_080754a8;
  *(undefined1 *)(param_1 + 0xd) = 0xd;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0xd;
  return in_lr;
}


