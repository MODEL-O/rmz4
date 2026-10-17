// undefined FUN_0805b55c(void)
// entry 0x805b55c


undefined4 FUN_0805b55c(int param_1)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0xc1);
    piVar8 = (int *)(param_1 + 200);
    iVar5 = *piVar8;
    if (iVar5 != 0) {
      pcVar3 = (char *)(param_1 + 0xbf);
      if (*pcVar3 == '\0') {
        *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
        *(undefined4 *)(iVar5 + 0x8c) = 0;
        *(undefined4 *)(iVar5 + 0x90) = 0;
        *(undefined1 *)(iVar5 + 0x94) = 0;
        *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
        piVar4 = (int *)((uint)*(byte *)(iVar5 + 9) * 4 + DAT_0805b67c);
        *(undefined4 *)(iVar5 + 0xc) = 3;
        *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
        *piVar8 = 0;
        *pcVar3 = -1;
      }
      if (*piVar8 != 0) {
        if (*pcVar3 == '\x01') {
          *(undefined1 *)(*piVar8 + 0xb5) = 1;
        }
        if (*piVar8 != 0) {
          if (*pcVar3 == '\x02') {
            *(undefined1 *)(*piVar8 + 0xb5) = 1;
          }
          if (*piVar8 != 0) {
            if (*pcVar3 == '\x03') {
              *(undefined1 *)(*piVar8 + 0xb5) = 1;
            }
            if (*piVar8 != 0) {
              if (*pcVar3 == '\x04') {
                *(undefined1 *)(*piVar8 + 0xb6) = 1;
                *piVar8 = 0;
                *pcVar3 = -1;
              }
              if ((*piVar8 != 0) && (*pcVar3 == '\x05')) {
                *(undefined1 *)(*piVar8 + 0xb6) = 1;
                *piVar8 = 0;
                *pcVar3 = -1;
              }
            }
          }
        }
      }
    }
    FUN_08005784(param_1 + 0x74,DAT_0805b680);
    FUN_0801cf00(param_1,DAT_0805b684);
    *(undefined1 *)(param_1 + 0xbd) = 1;
    bVar1 = *(byte *)(param_1 + 0xbc);
    *(byte *)(param_1 + 0x4c) = bVar1 & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (bVar1 & 1) << 4;
    if ((bVar1 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined4 *)(param_1 + 0x5c) = 0x200;
    *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    *(byte *)(param_1 + 0x12) = bVar1 * -0x30 + -0x28;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar5 = DAT_0805b714;
  iVar7 = *(int *)(param_1 + 0x5c);
  iVar6 = *(short *)((*(byte *)(param_1 + 0x12) + 0x40 & 0xff) * 2 + DAT_0805b714) * iVar7;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar6 >> 8);
  iVar5 = iVar7 * *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + iVar5);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar5 >> 8);
  iVar7 = iVar7 + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar7;
  if (iVar7 < 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if ((*(int *)(param_1 + 0x5c) == 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


