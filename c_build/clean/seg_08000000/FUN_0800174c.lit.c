// undefined FUN_0800174c(void)
// entry 0x800174c


void FUN_0800174c(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 local_2c;
  int local_28;
  uint local_24;
  byte local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  byte local_1d;
  
  FUN_08001aa0();
  bVar1 = param_1[3];
  if (bVar1 == 1) {
LAB_08001784:
    *(uint *)(param_1 + 0x10) = ((uint)*(ushort *)(param_1 + 6) * 6 + (uint)(byte)param_1[1]) * 0x55
    ;
    local_24 = *(uint *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x18) = local_24;
    local_2c = (*(int *)0x08129554);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
    local_28 = 0;
    local_20 = 0;
    for (uVar5 = local_24; uVar5 != 0; uVar5 = uVar5 - 1) {
      pbVar4 = *(byte **)(param_1 + 0xc);
      local_28 = local_28 + (uint)*pbVar4;
      local_20 = (*pbVar4 << (uVar5 & 7) | (byte)((int)(uint)*pbVar4 >> (8 - (uVar5 & 7) & 0xff))) ^
                 local_20;
      *(byte **)(param_1 + 0xc) = pbVar4 + 1;
    }
    local_1f = 8;
    local_1e = 6;
    local_1d = local_1d & 0x80 | param_1[1] & 0x7f | 0x80;
    sVar2 = FUN_08001bb0(&local_2c,*(undefined2 *)(param_1 + 0x10),0x10);
    if (sVar2 == 0) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 2;
      param_1[3] = 2;
      goto LAB_080018da;
    }
    sVar2 = *(short *)(param_1 + 4);
    *(short *)(param_1 + 4) = sVar2 + -1;
    uVar3 = 0x0000ffff;
    if ((short)(sVar2 + -1) != 0) goto LAB_080018da;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080018da;
      *(undefined2 *)(param_1 + 4) = 3;
      *(undefined2 *)(param_1 + 6) = 0;
      param_1[3] = 1;
      goto LAB_08001784;
    }
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        if (*(short *)(param_1 + 6) == 0) {
          *(undefined2 *)(param_1 + 4) = 3;
          *(undefined2 *)(param_1 + 6) = 1;
          param_1[3] = 1;
        }
        else {
          if (*(short *)(0x02000790 + 0x1c) == 0) {
            *(undefined2 *)(0x02000790 + 0x1c) = 1;
          }
          *param_1 = 0;
          *(undefined2 *)(param_1 + 2) = 0;
        }
      }
      goto LAB_080018da;
    }
    uVar5 = 8;
    if (*(uint *)(param_1 + 0x18) < 9) {
      param_1[3] = 3;
      uVar5 = *(uint *)(param_1 + 0x18);
    }
    sVar2 = FUN_08001bb0(*(undefined4 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0x10),
                         (int)(short)uVar5);
    if (sVar2 == 0) {
      *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar5;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar5;
      goto LAB_080018da;
    }
    sVar2 = *(short *)(param_1 + 4);
    *(short *)(param_1 + 4) = sVar2 + -1;
    uVar3 = 0x0000ffff;
    if ((short)(sVar2 + -1) != 0) {
      param_1[3] = 1;
      goto LAB_080018da;
    }
  }
  *(ushort *)(0x02000790 + 0x1c) = *(ushort *)(0x02000790 + 0x1c) | (ushort)uVar3;
  param_1[3] = 3;
LAB_080018da:
  FUN_08001b24(param_1);
  return;
}


