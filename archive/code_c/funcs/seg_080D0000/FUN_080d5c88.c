// undefined FUN_080d5c88(void)
// entry 0x80d5c88


undefined4 FUN_080d5c88(int param_1)

{
  ushort *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 in_lr;
  
  puVar1 = DAT_080d5cf4;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_080d5cf4 = *DAT_080d5cf4 | 0x4000;
    *(undefined1 *)((int)puVar1 + 0xd) = 0x31;
    *(byte *)(puVar1 + 7) = (byte)puVar1[7] | 0xe;
    *(undefined1 *)(param_1 + 0x74) = 0;
    *(undefined1 *)(param_1 + 0x75) = 0;
    *(undefined1 *)(param_1 + 0x76) = 0;
    *(undefined1 *)(param_1 + 0x7a) = 8;
    *(undefined1 *)(param_1 + 0x7b) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    cVar3 = *(char *)(param_1 + 0x7a) + '\x01';
    *(char *)(param_1 + 0x7a) = cVar3;
    if (cVar3 != -1) goto LAB_080d5d10;
    uVar4 = 1;
  }
  else {
    bVar5 = *(byte *)(param_1 + 0x7a) - 1;
    *(byte *)(param_1 + 0x7a) = bVar5;
    if (0x10 < bVar5) goto LAB_080d5d10;
    uVar4 = 0;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar4;
LAB_080d5d10:
  pbVar9 = (byte *)(param_1 + 0x7a);
  pbVar10 = (byte *)(param_1 + 0x7b);
  bVar5 = *pbVar10;
  *pbVar10 = bVar5 + 0x81;
  puVar2 = PTR_DAT_080d5dd0;
  iVar7 = *(int *)(param_1 + 0x7c);
  *(uint *)(param_1 + 0x54) =
       iVar7 + (int)*(short *)(PTR_DAT_080d5dd0 + (uint)(byte)(bVar5 - 0x3f) * 2) *
               (uint)(*pbVar9 >> 2);
  piVar8 = (int *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x58) =
       *piVar8 + (uint)(*pbVar9 >> 2) * (int)*(short *)(puVar2 + (uint)*pbVar10 * 2);
  *(uint *)(param_1 + 100) =
       iVar7 + (int)*(short *)(puVar2 + (*pbVar10 + 0x95 & 0xff) * 2) * (uint)(*pbVar9 >> 2);
  *(uint *)(param_1 + 0x68) =
       *piVar8 + (uint)(*pbVar9 >> 2) * (int)*(short *)(puVar2 + (*pbVar10 + 0x55 & 0xff) * 2);
  *(uint *)(param_1 + 0x5c) =
       iVar7 + (int)*(short *)(puVar2 + (*pbVar10 + 0xeb & 0xff) * 2) * (uint)(*pbVar9 >> 2);
  *(uint *)(param_1 + 0x60) =
       *piVar8 + (uint)(*pbVar9 >> 2) * (int)*(short *)(puVar2 + (*pbVar10 + 0xab & 0xff) * 2);
  if (5 < *(byte *)(param_1 + 0x13)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080d5dce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(PTR_PTR_080d5dd4 + (uint)*(byte *)(param_1 + 0x13) * 4))();
  return uVar6;
}


