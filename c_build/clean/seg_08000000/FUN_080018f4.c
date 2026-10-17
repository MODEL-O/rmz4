// undefined FUN_080018f4(void)
// entry 0x80018f4


void FUN_080018f4(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  FUN_08001aa0();
  iVar4 = DAT_08001a40;
  bVar1 = param_1[3];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        uVar7 = 8;
        if (*(uint *)(param_1 + 0x18) < 9) {
          param_1[3] = 3;
          uVar7 = *(uint *)(param_1 + 0x18);
        }
        FUN_08001b38(*(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc),
                     (int)(short)uVar7);
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar7;
        goto LAB_08001a8c;
      }
      if (bVar1 != 3) goto LAB_08001a8c;
      if (*(short *)(DAT_08001a40 + 0x1e) == 0) {
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
        iVar5 = DAT_08001a44;
        for (uVar7 = *(uint *)(param_1 + 0x14); uVar7 != 0; uVar7 = uVar7 - 1) {
          pbVar6 = *(byte **)(param_1 + 0xc);
          *(uint *)(iVar5 + 4) = *(int *)(iVar5 + 4) - (uint)*pbVar6;
          *(byte *)(iVar5 + 0xc) =
               (*pbVar6 << (uVar7 & 7) | (byte)((int)(uint)*pbVar6 >> (8 - (uVar7 & 7) & 0xff))) ^
               *(byte *)(iVar5 + 0xc);
          *(byte **)(param_1 + 0xc) = pbVar6 + 1;
        }
        if ((*(int *)(iVar5 + 4) != 0) || (*(char *)(iVar5 + 0xc) != '\0')) {
          sVar2 = *(short *)(param_1 + 4);
          *(short *)(param_1 + 4) = sVar2 + -1;
          if ((short)(sVar2 + -1) != 0) {
            param_1[3] = 1;
            goto LAB_08001a8c;
          }
          *(ushort *)(iVar4 + 0x1e) = *(ushort *)(iVar4 + 0x1e) | (ushort)DAT_08001a48;
        }
        if (*(short *)(iVar4 + 0x1e) != 0) goto LAB_08001a5e;
LAB_08001a80:
        *(undefined2 *)(iVar4 + 0x1e) = 1;
      }
      else {
LAB_08001a5e:
        if (*(short *)(param_1 + 6) == 0) {
          *(undefined2 *)(iVar4 + 0x1e) = 0;
          *(undefined2 *)(param_1 + 4) = 3;
          *(undefined2 *)(param_1 + 6) = 1;
          param_1[3] = 1;
          goto LAB_08001a8c;
        }
        if (*(short *)(iVar4 + 0x1e) == 0) goto LAB_08001a80;
      }
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      goto LAB_08001a8c;
    }
    if (bVar1 != 0) goto LAB_08001a8c;
    *(undefined2 *)(param_1 + 4) = 3;
    *(undefined2 *)(param_1 + 6) = 0;
    param_1[3] = 1;
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  uVar7 = ((uint)*(ushort *)(param_1 + 6) * 6 + (uint)(byte)param_1[1]) * 0x55;
  *(uint *)(param_1 + 0x10) = uVar7;
  piVar3 = DAT_08001980;
  FUN_08001b38(uVar7 & 0xffff,DAT_08001980,0x10);
  if (*piVar3 == *(int *)DAT_08001984) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 2;
    param_1[3] = 2;
  }
  else {
    sVar2 = *(short *)(param_1 + 4);
    *(short *)(param_1 + 4) = sVar2 + -1;
    if ((short)(sVar2 + -1) == 0) {
      *(ushort *)(DAT_0800198c + 0x1e) = *(ushort *)(DAT_0800198c + 0x1e) | (ushort)DAT_08001988;
      param_1[3] = 3;
    }
  }
LAB_08001a8c:
  FUN_08001b24(param_1);
  return;
}


