// undefined FUN_08045d40(void)
// entry 0x8045d40


undefined4 FUN_08045d40(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  byte *pbVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  cVar1 = *(char *)(param_1 + 0xf);
  if (cVar1 == '\0') {
    if (1 < *(byte *)(iVar8 + 0xc)) {
      if (*(char *)(param_1 + 0x11) == '\x02') {
        piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08045d94);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
        return in_lr;
      }
      goto LAB_08045d98;
    }
  }
  else {
    if (cVar1 == '\x02') {
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08045d70);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      return in_lr;
    }
LAB_08045d98:
    *(char *)(param_1 + 0xf) = cVar1 + '\x01';
  }
  if (*(byte *)(param_1 + 0xe) < 2) {
    if ((*(byte *)(param_1 + 0xe) == 1) && (*(byte *)(param_1 + 0x11) < 2)) {
      FUN_080455c4(*(undefined4 *)(param_1 + 0x2c),param_1,*(byte *)(param_1 + 0x11) + 1);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  piVar7 = (int *)(param_1 + 0xb4);
  piVar5 = (int *)(param_1 + 0xbc);
  *piVar7 = *piVar5;
  piVar6 = (int *)(param_1 + 0xb8);
  piVar3 = (int *)(param_1 + 0xc0);
  *piVar6 = *piVar3;
  *piVar5 = *(int *)(iVar8 + 0xb4);
  iVar8 = *(int *)(iVar8 + 0xb8);
  *piVar3 = iVar8;
  if (*(char *)(param_1 + 0x11) == '\x02') {
    if (*piVar6 == iVar8) {
      FUN_0801cfc8(param_1,DAT_08045eb4,(short)*(char *)(param_1 + 0x71),
                   (short)*(char *)(param_1 + 0x72));
      if (*piVar7 < *piVar5) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined1 *)(param_1 + 0x4c) = 0;
        bVar2 = *(byte *)(param_1 + 0x4a) & 0xef;
        goto LAB_08045f6a;
      }
      if (*piVar5 < *piVar7) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined1 *)(param_1 + 0x4c) = 1;
        bVar2 = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
LAB_08045f94:
        *(byte *)(param_1 + 0x4a) = bVar2;
      }
      goto LAB_08045f96;
    }
    FUN_0801cfc8(param_1,DAT_08045e50,(short)*(char *)(param_1 + 0x71),
                 (short)*(char *)(param_1 + 0x72));
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    pbVar4 = (byte *)(param_1 + 0x4a);
    *pbVar4 = *pbVar4 & 0xef;
    if (*piVar3 <= *piVar6) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      *(undefined1 *)(param_1 + 0x4d) = 1;
      bVar2 = *pbVar4 & 0xdf | 0x20;
      goto LAB_08045fae;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined1 *)(param_1 + 0x4d) = 0;
  }
  else {
    if (*piVar6 == iVar8) {
      FUN_0801cfc8(param_1,DAT_08045f70,(short)*(char *)(param_1 + 0x71),
                   (short)*(char *)(param_1 + 0x72));
      if (*piVar5 <= *piVar7) {
        if (*piVar5 < *piVar7) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
          *(undefined1 *)(param_1 + 0x4c) = 0;
          bVar2 = *(byte *)(param_1 + 0x4a) & 0xef;
          goto LAB_08045f94;
        }
        goto LAB_08045f96;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined1 *)(param_1 + 0x4c) = 1;
      bVar2 = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      FUN_0801cfc8(param_1,DAT_08045f20,(short)*(char *)(param_1 + 0x71),
                   (short)*(char *)(param_1 + 0x72));
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      bVar2 = *(byte *)(param_1 + 0x4a) & 0xef;
    }
LAB_08045f6a:
    *(byte *)(param_1 + 0x4a) = bVar2;
LAB_08045f96:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined1 *)(param_1 + 0x4d) = 0;
  }
  bVar2 = *(byte *)(param_1 + 0x4a) & 0xdf;
LAB_08045fae:
  *(byte *)(param_1 + 0x4a) = bVar2;
  FUN_0801cff0(param_1);
  iVar8 = *piVar5;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar8 = iVar8 + DAT_08045fe4;
  }
  *(int *)(param_1 + 0x54) = iVar8;
  iVar8 = *piVar3;
  if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
    iVar8 = iVar8 + DAT_08045fe4;
  }
  *(int *)(param_1 + 0x58) = iVar8;
  return in_lr;
}


