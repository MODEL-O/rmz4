// undefined FUN_0806aaf8(void)
// entry 0x806aaf8


undefined4 FUN_0806aaf8(int param_1,uint param_2,byte param_3,char param_4)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  byte bVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined4 in_lr;
  
  uVar10 = (uint)param_3;
  uVar7 = (param_2 & 0xff) + uVar10 * 2 * (0x140 - (param_2 & 0xff)) + 0x80;
  uVar8 = uVar7 & 0xff;
  if ((uVar8 != *(byte *)(param_1 + 0x24)) || (param_4 != '\0')) {
    puVar11 = (undefined1 *)(param_1 + 0x70);
    uVar4 = CONCAT11(*(undefined1 *)(param_1 + 0x1e),*puVar11);
    pcVar12 = (char *)(param_1 + 0x71);
    cVar1 = *pcVar12;
    pcVar6 = (char *)(param_1 + 0x72);
    cVar2 = *pcVar6;
    uVar3 = (undefined1)uVar7;
    if (uVar8 == 0) {
      FUN_0801cc9c(param_1);
      if (uVar10 == 0) {
        bVar5 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar5 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar5;
      *(byte *)(param_1 + 0x4c) = param_3 & 1;
      pbVar9 = (byte *)(param_1 + 0x4a);
      *pbVar9 = *pbVar9 & 0xef | (param_3 & 1) << 4;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined1 *)(param_1 + 0x4d) = 0;
      *pbVar9 = *pbVar9 & 0xdf;
      *(undefined1 *)(param_1 + 0x24) = uVar3;
    }
    else {
      if (uVar8 != 0x80) {
        if ((*(byte *)(param_1 + 0x24) & 0x7f) == 0) {
          FUN_0801ce54(param_1);
          FUN_0801cfc8(param_1,uVar4,(short)cVar1,(short)cVar2);
          FUN_0801cfc8(param_1,CONCAT11(*(undefined1 *)(param_1 + 0x1e),*puVar11),(short)*pcVar12,
                       *pcVar6 + 1);
          FUN_0801cff0(param_1);
        }
        if (uVar10 == 0) {
          bVar5 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar5 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar5;
        *(char *)(param_1 + 0x4c) = (char)(uVar10 & 1);
        pbVar9 = (byte *)(param_1 + 0x4a);
        *pbVar9 = *pbVar9 & 0xef | (byte)((uVar10 & 1) << 4);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
        *(undefined1 *)(param_1 + 0x4d) = 0;
        *pbVar9 = *pbVar9 & 0xdf;
        *(undefined1 *)(param_1 + 0x24) = uVar3;
        return in_lr;
      }
      FUN_0801cc9c(param_1);
      uVar7 = uVar10 + 1 & 1;
      if (uVar7 == 0) {
        bVar5 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar5 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar5;
      *(char *)(param_1 + 0x4c) = (char)uVar7;
      pbVar9 = (byte *)(param_1 + 0x4a);
      *pbVar9 = *pbVar9 & 0xef | (byte)(uVar7 << 4);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      *(undefined1 *)(param_1 + 0x4d) = 1;
      *pbVar9 = *pbVar9 & 0xdf | 0x20;
      *(undefined1 *)(param_1 + 0x24) = uVar3;
    }
    FUN_0801cfc8(param_1,uVar4,(short)cVar1,(short)cVar2);
    FUN_0801cfc8(param_1,CONCAT11(*(undefined1 *)(param_1 + 0x1e),*puVar11),(short)*pcVar12,
                 *pcVar6 + 1);
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


