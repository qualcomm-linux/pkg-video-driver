/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef _MSM_VIDC_GLYMUR_H_
#define _MSM_VIDC_GLYMUR_H_

struct msm_vidc_core;

#if defined(CONFIG_MSM_VIDC_GLYMUR) || defined(CONFIG_MSM_VIDC_QLI)
int msm_vidc_get_platform_data_glymur(struct msm_vidc_core *core);
int msm_vidc_init_platform_glymur(struct msm_vidc_core *core);
int msm_vidc_adjust_ir_period_glymur(void *instance, struct v4l2_ctrl *ctrl);
int msm_vidc_set_ir_period_glymur(void *instance,
				  enum msm_vidc_inst_capability_type cap_id);
#else
static inline int msm_vidc_get_platform_data_glymur(struct msm_vidc_core *core)
{
	return -EINVAL;
}

static inline int msm_vidc_init_platform_glymur(struct msm_vidc_core *core)
{
	return -EINVAL;
}

static inline int msm_vidc_adjust_ir_period_glymur(void *instance, struct v4l2_ctrl *ctrl)
{
	return -EINVAL;
}

static inline int msm_vidc_set_ir_period_glymur(void *instance,
						enum msm_vidc_inst_capability_type cap_id)
{
	return -EINVAL;
}

#endif

#endif /* _MSM_VIDC_GLYMUR_H_ */
