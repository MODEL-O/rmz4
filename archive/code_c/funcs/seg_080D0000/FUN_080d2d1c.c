// undefined FUN_080d2d1c(void)
// entry 0x80d2d1c


undefined4 FUN_080d2d1c(int param_1)

{
  ushort uVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  ushort *puVar5;
  int *piVar6;
  uint uVar7;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  uint *local_28;
  uint *local_24;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar2 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar2;
    if (*(byte *)(param_1 + 0x12) < bVar2) {
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) - 1;
      *(undefined1 *)(param_1 + 0x13) = 0;
      *(uint *)(iVar4 + 0x8c) = *(uint *)(iVar4 + 0x8c) | 1;
      *(uint *)(iVar4 + 0x90) = *(uint *)(iVar4 + 0x90) | 1;
      FUN_0801d3fc(iVar4);
      *(undefined1 *)(param_1 + 0x11) = 1;
    }
    else {
      *(uint *)(iVar4 + 0x8c) = *(uint *)(iVar4 + 0x8c) & 0xfffffffe;
      *(uint *)(iVar4 + 0x90) = *(uint *)(iVar4 + 0x90) & 0xfffffffe;
      FUN_0801d330(iVar4);
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    if (*(byte *)(param_1 + 0x12) < 2) {
      *(undefined2 *)(param_1 + 0x80) = 0x80;
      FUN_08002b10(0x30);
      FUN_08001d30(DAT_080d2dd8,
                   ((uint)*(ushort *)(DAT_080d2ddc + 0x16) -
                   (uint)(*(ushort *)(DAT_080d2dd8 + 6) >> 6)) * 0x20 + 0x10000);
      FUN_08002208(DAT_080d2de0,
                   ((uint)*(ushort *)(DAT_080d2de4 + 0x16) - (uint)*(byte *)(DAT_080d2de0 + 7)) *
                   0x20 + 0x200);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xd) == '\x01') {
    bVar2 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2 + 1;
    if ((bVar2 & 3) < 2) {
      *(uint *)(iVar4 + 0x8c) = *(uint *)(iVar4 + 0x8c) & 0xfffffffe;
      *(uint *)(iVar4 + 0x90) = *(uint *)(iVar4 + 0x90) & 0xfffffffe;
      FUN_0801d330(iVar4);
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    else {
      *(uint *)(iVar4 + 0x8c) = *(uint *)(iVar4 + 0x8c) | 1;
      *(uint *)(iVar4 + 0x90) = *(uint *)(iVar4 + 0x90) | 1;
      FUN_0801d3fc(iVar4);
      *(undefined1 *)(param_1 + 0x11) = 1;
    }
    local_28 = (uint *)(iVar4 + 0x8c);
    local_24 = (uint *)(iVar4 + 0x90);
    puVar5 = (ushort *)(param_1 + 0x80);
    if (*puVar5 == 0x28) {
      local_30 = *(int *)(param_1 + 0x54);
      local_2c = *(int *)(param_1 + 0x58);
      FUN_080d29c0(iVar4,&local_30,3,0);
    }
    sVar3 = FUN_08129198(*puVar5,0x12);
    if (sVar3 == 0) {
      uVar7 = DAT_080d2fb0 * *DAT_080d2fac + DAT_080d2fb4;
      local_30 = *(int *)(param_1 + 0x54) + (0x40 - ((uVar7 & 0x7fffffff) >> 0x10 & 0x7f)) * 0x100;
      uVar7 = DAT_080d2fb0 * (uVar7 & 0x7fffffff) + DAT_080d2fb4;
      *DAT_080d2fac = uVar7 & 0x7fffffff;
      local_2c = *(int *)(param_1 + 0x58) + (0x40 - ((uVar7 & 0x7fffffff) >> 0x10 & 0x7f)) * 0x100;
      FUN_080d0c88(1,&local_30);
    }
    sVar3 = FUN_08129198(*puVar5,0x12);
    if (sVar3 == 9) {
      uVar7 = DAT_080d2fb0 * *DAT_080d2fac + DAT_080d2fb4;
      local_30 = *(int *)(param_1 + 0x54) + (0x10 - ((uVar7 & 0x7fffffff) >> 0x10 & 0x1f)) * 0x100;
      uVar7 = DAT_080d2fb0 * (uVar7 & 0x7fffffff) + DAT_080d2fb4;
      local_2c = *(int *)(param_1 + 0x58) + (0x10 - ((uVar7 & 0x7fffffff) >> 0x10 & 0x1f)) * 0x100;
      uVar7 = (uVar7 & 0x7fffffff) * DAT_080d2fb0 + DAT_080d2fb4;
      *DAT_080d2fac = uVar7 & 0x7fffffff;
      FUN_080d29c0(param_1,&local_30,2,(uVar7 & 0x7fffffff) >> 0x10 & 0xff);
    }
    sVar3 = FUN_08129198(*puVar5,0x12);
    if (sVar3 == 0) {
      FUN_08002b10(0x35);
    }
    sVar3 = FUN_08129198(*puVar5,6);
    if (sVar3 == 0) {
      local_30 = *(int *)(param_1 + 0x54);
      local_2c = *(int *)(param_1 + 0x58);
      FUN_080d29c0(param_1,&local_30,1,*(byte *)(param_1 + 0x12) >> 1 & 3);
    }
    uVar1 = *puVar5;
    *puVar5 = (ushort)(uVar1 - 1);
    if ((uVar1 - 1) * 0x10000 - DAT_080d2fb8 == 0) {
      *local_28 = *local_28 | 1;
      *local_24 = *local_24 | 1;
      FUN_0801d3fc(iVar4);
      piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d2fbc);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 8);
    }
  }
  return in_lr;
}


